#include"StreamOperator.h"

using namespace jccpp;

void jccpp::CopyStream(
	base::Stream *src_stream,
	base::Stream *dst_stream,
	std::shared_ptr<CancellationToken> cancellationToken
)
{
	uint8_t temp_buf[1024 * 4];
	while (1)
	{
		if (cancellationToken && cancellationToken->IsCancellationRequested())
		{
			throw TaskCanceledException();
		}

		int32_t have_read = src_stream->Read(temp_buf, 0, sizeof(temp_buf));
		if (have_read == 0)
		{
			return;
		}

		dst_stream->Write(temp_buf, 0, have_read);
	}
}
