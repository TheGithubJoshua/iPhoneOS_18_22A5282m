@class NSArray, NSString;

@interface _MPModelLibraryRequestPropertyFilter : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *keys;
@property (readonly, copy, nonatomic) NSString *value;
@property (readonly, nonatomic) long long comparisonType;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithKeys:(id)a0 value:(id)a1 comparisonType:(long long)a2;

@end
