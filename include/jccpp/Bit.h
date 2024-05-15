#pragma once
#include<bit>
#include<stdint.h>

namespace jccpp
{
	class Bit
	{
	private:
		Bit() = delete;
		Bit(Bit const &o) = delete;
		Bit(Bit const &&o) = delete;
		Bit &operator=(Bit const &o) = delete;

	public:
		/// <summary>
		///		从最高位开始数，有多少个连续的 0.
		/// </summary>
		/// <param name="num"></param>
		/// <returns></returns>
		static constexpr int HighZeroCount(uint32_t num)
		{
			return std::countl_zero(num);
		}

		/// <summary>
		///		从最高位开始数，有多少个连续的 0.
		/// </summary>
		/// <param name="num"></param>
		/// <returns></returns>
		static constexpr int HighZeroCount(uint64_t num)
		{
			return std::countl_zero(num);
		}

		/// <summary>
		///		最高位的 1 的索引。
		///		* 例如 0x1 的 bit0 是最高位的 1，于是返回 0.
		/// </summary>
		/// <param name="num"></param>
		/// <returns></returns>
		static constexpr int HighestOneBitIndex(uint32_t num)
		{
			int count = HighZeroCount(num);
			return 32 - count - 1;
		}

		/// <summary>
		///		最高位的 1 的索引。
		///		* 例如 0x1 的 bit0 是最高位的 1，于是返回 0.
		/// </summary>
		/// <param name="num"></param>
		/// <returns></returns>
		static constexpr int HighestOneBitIndex(uint64_t num)
		{
			int count = HighZeroCount(num);
			return 64 - count - 1;
		}
	};
}
