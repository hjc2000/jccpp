#pragma once
#include<base/stream/Stream.h>
#include<base/task/CancellationTokenSource.h>
#include<base/task/TaskCanceledException.h>

namespace jccpp
{
	void CopyStream(
		base::Stream *src_stream,
		base::Stream *dst_stream,
		std::shared_ptr<base::CancellationToken> cancellationToken = nullptr
	);
}
