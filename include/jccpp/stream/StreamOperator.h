#pragma once
#include<base/stream/Stream.h>
#include<jccpp/CancellationTokenSource.h>

namespace jccpp
{
	void CopyStream(
		base::Stream *src_stream,
		base::Stream *dst_stream,
		std::shared_ptr<CancellationToken> cancellationToken = nullptr
	);
}
