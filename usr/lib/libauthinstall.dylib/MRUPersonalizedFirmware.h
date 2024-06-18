@class NSData;

@interface MRUPersonalizedFirmware : NSObject

@property (readonly) NSData *payload;
@property (readonly) NSData *manifest;

- (void).cxx_destruct;
- (id)description;
- (id)initWithPayload:(id)a0 manifest:(id)a1;

@end
