//
//  address_fwd.hpp
//  blocksci
//
//  Created by Harry Kalodner on 11/8/17.
//

#ifndef address_fwd_h
#define address_fwd_h

#include <blocksci/core/address_types.hpp>
#include <blocksci/core/dedup_address_type.hpp>

namespace blocksci {
    struct RawAddress;
    
    class Address;
    struct DedupAddress;
    class EquivAddress;
    
    template <AddressType::Enum>
    struct AddressInfo;
    
    template <DedupAddressType::Enum>
    struct DedupAddressInfo;
    
    template <EquivAddressType::Enum>
    struct EquivAddressInfo;
}

#endif /* address_fwd_h */
