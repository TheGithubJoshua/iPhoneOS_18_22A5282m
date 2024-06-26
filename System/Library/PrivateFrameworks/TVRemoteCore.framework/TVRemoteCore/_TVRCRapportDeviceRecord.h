@class NSString, RPCompanionLinkDevice;

@interface _TVRCRapportDeviceRecord : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) RPCompanionLinkDevice *device;
@property (readonly, nonatomic) unsigned long long transports;
@property (readonly, nonatomic) BOOL hasAvailableTransports;

- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)updateTransportsForStatusFlags:(unsigned long long)a0;
- (unsigned long long)_transportForStatusFlag:(unsigned long long)a0;
- (void)addTransportForStatusFlag:(unsigned long long)a0;
- (void)removeTransportForStatusFlag:(unsigned long long)a0;

@end
