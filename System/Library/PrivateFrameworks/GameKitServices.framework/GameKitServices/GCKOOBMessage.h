@class NSData;

@interface GCKOOBMessage : NSObject <NSSecureCoding> {
    unsigned int type;
    unsigned int band;
    NSData *data;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (unsigned int)band;
- (id)initWithCoder:(id)a0;
- (id)data;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void)dealloc;
- (unsigned int)type;

@end
