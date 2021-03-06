//
//  sm2_test_param.c
//  mbedtlsSM2
//
//  Created by mac on 2018/4/17.
//  Copyright © 2018年 mac. All rights reserved.
//



//ECP_TYPE_SHORT_WEIERSTRASS
//y2 = x3 + ax + b。
char *sm2_param_recommand[] = {
    //p
    "FFFFFFFE" "FFFFFFFF" "FFFFFFFF" "FFFFFFFF" "FFFFFFFF" "00000000" "FFFFFFFF" "FFFFFFFF",
    //a
    "FFFFFFFE" "FFFFFFFF" "FFFFFFFF" "FFFFFFFF" "FFFFFFFF" "00000000" "FFFFFFFF" "FFFFFFFC",
    //b
    "28E9FA9E" "9D9F5E34" "4D5A9E4B" "CF6509A7" "F39789F5" "15AB8F92" "DDBCBD41" "4D940E93",
    //G_x
    "32C4AE2C" "1F198119" "5F990446" "6A39C994" "8FE30BBF" "F2660BE1" "715A4589" "334C74C7",
    //G_y
    "BC3736A2" "F4F6779C" "59BDCEE3" "6B692153" "D0A9877C" "C62A4740" "02DF32E5" "2139F0A0",
    //n
    "FFFFFFFE" "FFFFFFFF" "FFFFFFFF" "FFFFFFFF" "7203DF6B" "21C6052B" "53BBF409" "39D54123",
};




char *sm2_param_d_B[2] = {
    "1649AB77A00637BD5E2EFE283FBF353534AA7F7CB89463F208DDBC2920BB0DA0",
    "56A270D17377AA9A367CFA82E46FA5267713A9B91101D0777B07FCE018C757EB",
};

char *sm2_param_k[2] = {
    "4C62EEFD6ECFC2B95B92FD6C3D9575148AFA17425546D49018E5388D49DD7B4F",
    "6D3B497153E3E92524E5C122682DBDC8705062E20B917A5F8FCDB8EE4C66663D",
};

char *sm2_param_digest_d_A[2] = {
    "128B2FA8BD433C6C068C8D803DFF79792A519A55171B1B650C23661D15897263",
    "771EF3DB" "FF5F1CDC" "32B9C572" "93047619" "1998B2BF" "7CB981D7" "F5B39202" "645F0931",
};

char *sm2_param_digest_k[2] = {
    "6CB28D99385C175C94F94E934817663FC176D925DD72B727260DBAAE1FB2F96F",
    "36CD79FC" "8E24B735" "7A8A7B4A" "46D454C3" "97703D64" "98158C60" "5399B341" "ADA186D6",
};

char *sm2_param_dh_d_A[2] = {
    "6FCBA2EF" "9AE0AB90" "2BC3BDE3" "FF915D44" "BA4CC78F" "88E2F8E7" "F8996D3B" "8CCEEDEE",
    "4813903D" "254F2C20" "A94BC570" "42384969" "54BB5279" "F861952E" "F2C5298E" "84D2CEAA",
};
char *sm2_param_dh_r_A[2] = {
    "83A2C9C8" "B96E5AF7" "0BD480B4" "72409A9A" "327257F1" "EBB73F5B" "073354B2" "48668563",
    "54A3D667" "3FF3A6BD" "6B02EBB1" "64C2A3AF" "6D4A4906" "229D9BFC" "E68CC366" "A2E64BA4",
};
char *sm2_param_dh_d_B[2] = {
    "5E35D7D3" "F3C54DBA" "C72E6181" "9E730B01" "9A84208C" "A3A35E4C" "2E353DFC" "CB2A3B53",
    "08F41BAE" "0922F47C" "212803FE" "681AD52B" "9BF28A35" "E1CD0EC2" "73A2CF81" "3E8FD1DC",
};
char *sm2_param_dh_r_B[2] = {
    "33FE2194" "0342161C" "55619C4A" "0C060293" "D543C80A" "F19748CE" "176D8347" "7DE71C80",
    "1F219333" "87BEF781" "D0A8F7FD" "708C5AE0" "A56EE3F4" "23DBC2FE" "5BDF6F06" "8C53F7AD",
};

char *message = "HELLOWORLD";
char *message_digest = "HELLOWORLD";

char *ID_A = "192.168.0.1";
char *ID_B = "192.168.0.2";

//cofactor h
int sm2_param_dh_h[2] = {
    1
    , 4
};
