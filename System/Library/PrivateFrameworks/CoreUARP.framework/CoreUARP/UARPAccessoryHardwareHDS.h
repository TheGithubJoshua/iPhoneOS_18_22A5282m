@class NSUUID;

@interface UARPAccessoryHardwareHDS : UARPAccessoryHardwareID

@property (readonly) NSUUID *uuid;

- (id)initWithUUID:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;

@end
