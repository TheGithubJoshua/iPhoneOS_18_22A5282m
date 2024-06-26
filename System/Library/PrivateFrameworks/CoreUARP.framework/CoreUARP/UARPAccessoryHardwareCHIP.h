@class UARPAccessoryMetadata;

@interface UARPAccessoryHardwareCHIP : UARPAccessoryHardwareID

@property (readonly) unsigned short vendorID;
@property (readonly) unsigned short productID;
@property (readonly) unsigned short hwID;
@property (readonly) UARPAccessoryMetadata *metadata;

- (void).cxx_destruct;
- (id)description;
- (id)initWithVendorID:(unsigned short)a0 productID:(unsigned short)a1 hardwareID:(unsigned short)a2 metadata:(id)a3;

@end
