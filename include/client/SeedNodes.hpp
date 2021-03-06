// Copyright (c) 2017-2018 The CDC developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.


#pragma once

namespace cdcchain {
    namespace client {

#ifndef CDC_TEST_NETWORK
        static const std::vector<std::string> SeedNodes
        {
            "52.69.19.61:50066",
            "13.231.118.89:50066",
            "52.194.159.25:50066",
            "18.182.59.10:50066",
            "18.179.28.43:50066",
            "46.51.225.245:50066",
            "18.182.59.63:50066",
            "54.199.220.92:50066"
        };
#else
        static const std::vector<std::string> SeedNodes
        {
			"54.249.102.240:50166",
			"52.192.130.135:50166",
			"54.238.107.10:50166",
			"13.114.42.81:50166"   //node for open test
        };
#endif

    }
} // cdcchain::client
