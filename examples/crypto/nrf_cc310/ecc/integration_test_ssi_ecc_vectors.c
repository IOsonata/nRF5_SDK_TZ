/**
 * Copyright (c) 2017 - 2022, Nordic Semiconductor ASA
 *
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this
 *    list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form, except as embedded into a Nordic
 *    Semiconductor ASA integrated circuit in a product or a software update for
 *    such product, must reproduce the above copyright notice, this list of
 *    conditions and the following disclaimer in the documentation and/or other
 *    materials provided with the distribution.
 *
 * 3. Neither the name of Nordic Semiconductor ASA nor the names of its
 *    contributors may be used to endorse or promote products derived from this
 *    software without specific prior written permission.
 *
 * 4. This software, with or without modification, must only be used with a
 *    Nordic Semiconductor ASA integrated circuit.
 *
 * 5. Any software provided in binary form under this license must not be reverse
 *    engineered, decompiled, modified and/or disassembled.
 *
 * THIS SOFTWARE IS PROVIDED BY NORDIC SEMICONDUCTOR ASA "AS IS" AND ANY EXPRESS
 * OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY, NONINFRINGEMENT, AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL NORDIC SEMICONDUCTOR ASA OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
 * GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */
#include "ssi_pal_types.h"
#include "integration_test_ssi_data.h"

eccSignDataStuct eccSignVectors[] = {
	{	
		/*Test parameters*/
		{"ECC/Domain-secp256r1/HASH_SHA1/128ByteInputData/Build_external_keys"},
		/*CRYS_ECPKI_DomainID*/
		CRYS_ECPKI_DomainID_secp256r1,
		/*CRYS_ECPKI_HASH_OpMode_t*/
		CRYS_ECPKI_HASH_SHA1_mode,
		/*input data*/
		{0xd4,0xcd,0xa5,0x8a,0x83,0xcd,0xbb,0x42,0xac,0x9f,0xa5,0xa2,0x6e,0xee,0x31,0xd1,
		 0xa7,0x3a,0xb1,0x6b,0xcd,0x2a,0xfc,0x79,0x19,0x23,0xb5,0xa0,0xeb,0x19,0xd0,0x98,
		 0x6a,0xa5,0x51,0xe0,0x6a,0x58,0x57,0xb0,0x94,0x50,0x5a,0x30,0xc0,0x08,0xb1,0xe7,
		 0xa6,0x74,0x57,0x76,0xb6,0x4e,0xee,0x86,0x44,0xab,0x04,0xff,0xe8,0xd1,0x96,0x7a,
		 0x25,0x4c,0xd2,0xfa,0x48,0x3f,0x21,0xd6,0x93,0xf9,0x65,0xfa,0x9b,0xc8,0x7f,0x50,
		 0xef,0x12,0x15,0x78,0xfa,0xa1,0x92,0xbf,0x2b,0x3f,0x6e,0x4f,0x53,0x83,0xaf,0xa3,
		 0x4e,0xea,0xb0,0x3e,0xe5,0x29,0x21,0x9d,0xf3,0xc2,0x4f,0x6a,0xc7,0xd6,0xa5,0xf2,
		 0xca,0x3a,0x73,0xd9,0x61,0xcd,0xef,0x0c,0x15,0x08,0x7a,0xf8,0xf2,0xd6,0x24,0xfa,
		 0xa1,0xd1,0x45,0xcf,0xac,0x15,0x8b,0x04,0x3b,0x26,0x62,0xa8,0x17,0x78,0xf7,0x81,
		 0x01,0x9a,0x34,0x26,0x46,0x74,0xee,0x61,0x93,0xcd,0x60,0xd8,0x0b,0x10,0xd8},
		/*input data size*/
		128, 
		/*PublKey*/
		{0x04,
		 0x2a,0xe4,0xa3,0xca,0x17,0x5e,0x29,0x90,0xfa,0x1e,0x8b,0x67,0x7d,0x33,0x6b,0x4c,
		 0xbc,0xe2,0xd8,0x53,0xd7,0x0f,0x37,0x81,0x86,0xe4,0x5b,0x39,0x0b,0x52,0x3d,0xa7,
		 0x09,0xaf,0x5b,0xa5,0x62,0x5e,0x73,0xed,0x88,0x3b,0xe1,0xe7,0xac,0x48,0x30,0x06,
		 0xa7,0x0f,0x66,0xad,0xf3,0x1f,0xbb,0xe5,0x89,0x1b,0x4b,0x0d,0xa4,0x6c,0xaa,0x07},
		/*PublKeySize*/
		65,
		/*PrivKey*/
		{0xf0,0xac,0xa4,0x26,0x28,0x52,0x83,0xa6,0x8c,0xc3,0x4f,0xe7,0xd8,0x62,0xc6,0x2a,
		 0xcb,0x33,0xd1,0x4c,0x34,0x0a,0x7d,0xb9,0xa8,0x9b,0x4d,0x6f,0xa0,0xfa,0xb6,0x38},
		/*PrivlKeySize*/
		32,
		/*Signiture Size*/
		64,
	},
	{
			/*Test parameters*/
		{"ECC/Domain-secp256r1/HASH_SHA1/128ByteInputData/Generate_Keys"},
		/*CRYS_ECPKI_DomainID*/
		CRYS_ECPKI_DomainID_secp256r1,
		/*CRYS_ECPKI_HASH_OpMode_t*/
		CRYS_ECPKI_HASH_SHA1_mode,
		/*input data*/
		{0xd4,0xcd,0xa5,0x8a,0x83,0xcd,0xbb,0x42,0xac,0x9f,0xa5,0xa2,0x6e,0xee,0x31,0xd1,
		 0xa7,0x3a,0xb1,0x6b,0xcd,0x2a,0xfc,0x79,0x19,0x23,0xb5,0xa0,0xeb,0x19,0xd0,0x98,
		 0x6a,0xa5,0x51,0xe0,0x6a,0x58,0x57,0xb0,0x94,0x50,0x5a,0x30,0xc0,0x08,0xb1,0xe7,
		 0xa6,0x74,0x57,0x76,0xb6,0x4e,0xee,0x86,0x44,0xab,0x04,0xff,0xe8,0xd1,0x96,0x7a,
		 0x25,0x4c,0xd2,0xfa,0x48,0x3f,0x21,0xd6,0x93,0xf9,0x65,0xfa,0x9b,0xc8,0x7f,0x50,
		 0xef,0x12,0x15,0x78,0xfa,0xa1,0x92,0xbf,0x2b,0x3f,0x6e,0x4f,0x53,0x83,0xaf,0xa3,
		 0x4e,0xea,0xb0,0x3e,0xe5,0x29,0x21,0x9d,0xf3,0xc2,0x4f,0x6a,0xc7,0xd6,0xa5,0xf2,
		 0xca,0x3a,0x73,0xd9,0x61,0xcd,0xef,0x0c,0x15,0x08,0x7a,0xf8,0xf2,0xd6,0x24,0xfa,
		 0xa1,0xd1,0x45,0xcf,0xac,0x15,0x8b,0x04,0x3b,0x26,0x62,0xa8,0x17,0x78,0xf7,0x81,
		 0x01,0x9a,0x34,0x26,0x46,0x74,0xee,0x61,0x93,0xcd,0x60,0xd8,0x0b,0x10,0xd8},
		/*input data size*/
		128, 
		/*PublKey*/
		{0},
		/*PublKeySize*/
		0,
		/*PrivKey*/
		{0},
		/*PrivlKeySize*/
		0,
		/*Signiture Size*/
		64,
	}

};

eccDHDataStuct eccDHVectors[] = {
	{	
		/*Test parameters*/
		{"DH/Domain-secp256r1/ExternalKeys"},
		/*CRYS_ECPKI_DomainID*/
		CRYS_ECPKI_DomainID_secp256r1,
		/*PublKey 1*/
		{0x04,
		 0x4e,0x70,0x81,0xa8,0x89,0xb6,0x26,0x9e,0xd6,0xad,0xa9,0xa2,0x5a,0xa4,0x9b,0x9f,
		 0x47,0x85,0x01,0x53,0xe3,0x41,0xdb,0xa9,0xa1,0x9f,0xfa,0xbe,0xe0,0xf7,0xe6,0x50,
		 0xcb,0x2a,0x00,0x0a,0x54,0x21,0x70,0x4b,0x6c,0xfb,0x79,0xe1,0xe3,0x0f,0xc7,0x23,
		 0xf3,0x00,0x4a,0x12,0x7e,0xa8,0x5b,0xb9,0xd1,0x9e,0x46,0x75,0xf7,0x06,0xb0,0x2f},
		/*PublKeySize 1*/
		65,
		/*PrivKey 1*/
		{0x3e,0xa3,0x6f,0x17,0xa6,0x1a,0x2b,0xeb,0xff,0xba,0x58,0x3d,0xb5,0x9a,0x0c,0xd0,
		 0x0a,0xff,0x50,0x25,0xab,0xbc,0xdb,0x6b,0x1b,0xe8,0x2c,0xe4,0x51,0xcf,0x3c,0x9b},
		/*PrivlKeySize 1*/
		32,
 		/*PublKey 2*/
		{0x04,
		 0x09,0x59,0x82,0xfc,0x5f,0xa8,0x2a,0x0d,0x19,0x3e,0x64,0x72,0x61,0x8d,0x9a,0x78,
		 0x45,0x44,0x7f,0xdc,0x72,0x19,0xca,0x5f,0x0a,0x6b,0xfd,0x60,0xb2,0x10,0x2d,0xd8,
		 0x5a,0x3a,0x0c,0xdb,0xb3,0xf1,0x2b,0xf2,0x40,0x5c,0xa4,0x3c,0x00,0xdf,0xc5,0x8a,
		 0xa6,0x80,0x60,0x73,0x0b,0xee,0xe7,0x73,0xeb,0x79,0xd5,0x16,0xbb,0xc0,0x61,0x6c},
		/*PublKeySize 2*/
		65,
		/*PrivKey 2*/
		{0x53,0x98,0xdb,0xf1,0x28,0xce,0xc4,0xb3,0x79,0x9b,0x56,0x17,0xa8,0xac,0xf2,0x76,
		 0x83,0x66,0xf9,0x21,0x15,0x2f,0x4b,0x4d,0xb2,0x5b,0x1d,0x24,0xcc,0x37,0xde,0x13},
		/*PrivlKeySize 2*/
		32
	},
		{	
		/*Test parameters*/
		{"DH/Domain-secp256r1/Generatedkeys"},
		/*CRYS_ECPKI_DomainID*/
		CRYS_ECPKI_DomainID_secp256r1,
		/*PublKey 1*/
		{0x0},
		/*PublKeySize 1*/
		0,
		/*PrivKey 1*/
		{0x0},
		/*PrivlKeySize 1*/
		0,
 		/*PublKey 2*/
		{0x0},
		/*PublKeySize 2*/
		0,
		/*PrivKey 2*/
		{0x0},
		/*PrivlKeySize 2*/
		0
	}
};
	

