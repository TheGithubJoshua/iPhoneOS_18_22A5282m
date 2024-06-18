@class NSString;

@interface CWFChannel : NSObject <CWFJSONEncodable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long channel;
@property (nonatomic) unsigned int flags;
@property (readonly, nonatomic) int width;
@property (readonly, nonatomic) int band;
@property (readonly, nonatomic) BOOL is2GHz;
@property (readonly, nonatomic) BOOL is5GHz;
@property (readonly, nonatomic) BOOL is6GHz;
@property (readonly, nonatomic) BOOL is6GHzPSC;
@property (readonly, nonatomic) BOOL isDFS;

+ (id)channelWithNumber:(unsigned long long)a0 band:(int)a1 width:(int)a2;

- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToChannel:(id)a0;
- (BOOL)is5GHz;
- (int)width;
- (id)JSONCompatibleKeyValueMap;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isDFS;
- (BOOL)isEqual:(id)a0;
- (BOOL)is6GHzPSC;
- (BOOL)extAbove;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)is6GHz;
- (BOOL)is2GHz;

@end
