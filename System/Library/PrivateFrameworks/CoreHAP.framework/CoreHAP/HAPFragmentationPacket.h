@class NSData;

@interface HAPFragmentationPacket : HMFObject

@property (readonly, nonatomic) unsigned short transactionIdentifier;
@property (readonly, nonatomic) unsigned int length;
@property (readonly, nonatomic) unsigned int offset;
@property (readonly, copy, nonatomic) NSData *data;

- (id)init;
- (id)serialize;
- (id)shortDescription;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)debugDescription;
- (id)initWithData:(id)a0 transactionIdentifier:(unsigned short)a1 length:(unsigned int)a2 offset:(unsigned int)a3;
- (id)initWithFragmentedPacketData:(id)a0;

@end
