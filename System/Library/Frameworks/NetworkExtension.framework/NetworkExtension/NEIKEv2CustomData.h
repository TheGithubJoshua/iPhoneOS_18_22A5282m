@class NSData;

@interface NEIKEv2CustomData : NSObject <NSCopying>

@property unsigned long long customType;
@property (retain) NSData *customData;

- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
