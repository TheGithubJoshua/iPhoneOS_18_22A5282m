@class MKServerFormattedStringParameters;
@protocol GEOServerFormattedString;

@interface MKServerFormattedString : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id<GEOServerFormattedString> geoServerString;
@property (readonly, copy, nonatomic) MKServerFormattedStringParameters *parameters;

+ (id)attributesForServerFormatStyle:(long long)a0;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToServerFormattedString:(id)a0;
- (id)_attributesByTokenForFormatStyles:(id)a0;
- (id)_parametersByScrubbingUnusedOverrideVariablesFromParameters:(id)a0 geoServerString:(id)a1;
- (id)initWithGeoServerString:(id)a0 parameters:(id)a1;
- (id)multiPartAttributedStringWithAttributes:(id)a0;

@end
