#pragma once
#include<stdint.h>

namespace jccpp
{
	class ModbusCrc16
	{
	private:
		uint16_t _crc16_register = UINT16_MAX;
		uint16_t _polynomial = 0xA001;

	public:
		/// <summary>
		///		生成多项式使用 0xA001。
		/// </summary>
		ModbusCrc16() = default;

		/// <summary>
		///		自定义生成多项式。
		/// </summary>
		/// <param name="polynomial"></param>
		ModbusCrc16(uint16_t polynomial);

		/// <summary>
		///		添加一个数进行计算。
		/// </summary>
		/// <param name="data"></param>
		void Add(uint8_t data);

		/// <summary>
		///		CRC16 寄存器的值。
		/// </summary>
		/// <returns></returns>
		uint16_t RegisterValue();
		uint8_t RegisterValueHighByte();
		uint8_t RegisterValueLowByte();
	};
}
