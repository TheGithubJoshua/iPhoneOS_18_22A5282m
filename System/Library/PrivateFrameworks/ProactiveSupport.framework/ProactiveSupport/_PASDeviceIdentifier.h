@class NSUUID, NSString;

@interface _PASDeviceIdentifier : NSObject {
    NSString *_path;
}

@property (readonly) NSUUID *UUID;

- (id)init;
- (void).cxx_destruct;
- (id)initWithBasePath:(id)a0;
- (void)reset;

@end
