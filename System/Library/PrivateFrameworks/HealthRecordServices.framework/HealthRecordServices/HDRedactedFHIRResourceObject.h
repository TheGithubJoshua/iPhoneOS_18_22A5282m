@class NSString;

@interface HDRedactedFHIRResourceObject : HDFHIRJSONObject

@property (readonly, copy, nonatomic) NSString *resourceType;

+ (BOOL)supportsSecureCoding;
+ (id)resourceObjectWithFHIRJSONObject:(id)a0 redactedJSONObject:(id)a1 error:(id *)a2;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)_initWithResourceType:(id)a0 sourceURL:(id)a1 FHIRVersion:(id)a2 JSONObject:(id)a3;

@end
