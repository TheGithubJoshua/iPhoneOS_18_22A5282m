@class NSMutableDictionary;

@interface HRSSupportedFHIRConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *releasesTable;

+ (id)emetConfiguration;

- (id)initWithCoder:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isSupportedFHIRResourceType:(id)a0 FHIRVersionString:(id)a1;
- (BOOL)isSupportedFHIRVersionString:(id)a0;
- (id)supportedReleaseForFHIRRelease:(id)a0;
- (BOOL)addSupportedFHIRRelease:(id)a0 error:(id *)a1;
- (BOOL)isSupportedFHIRRelease:(id)a0;
- (BOOL)isSupportedFHIRResourceType:(id)a0 FHIRRelease:(id)a1;

@end
