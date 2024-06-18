@class NSError;

@interface WCMessageResponse : WCMessage <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSError *error;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;

@end
