@class NSString, NSArray, MTLFunctionConstantValues, NSDictionary;

@interface MTLFunctionDescriptor : NSObject <NSCopying> {
    struct MTLFunctionDescriptorPrivate { NSString *name; NSString *specializedName; unsigned long long options; MTLFunctionConstantValues *constantValues; NSArray *binaryArchives; BOOL applyFunctionConstants; NSArray *privateFunctions; } _private;
    unsigned long long _pipelineOptions;
    NSDictionary *_pluginData;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *specializedName;
@property (copy, nonatomic) MTLFunctionConstantValues *constantValues;
@property (nonatomic) unsigned long long options;
@property (copy, nonatomic) NSArray *binaryArchives;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)functionDescriptor;

- (void)setPluginData:(id)a0;
- (id)init;
- (void)setPipelineOptions:(unsigned long long)a0;
- (id)privateFunctions;
- (unsigned long long)options;
- (unsigned long long)hash;
- (BOOL)applyFunctionConstants;
- (unsigned long long)pipelineOptions;
- (id)name;
- (void)setOptions:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)constantValues;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setApplyFunctionConstants:(BOOL)a0;
- (void)setPrivateFunctions:(id)a0;
- (id)pluginData;
- (void)dealloc;
- (void)setName:(id)a0;
- (id)formattedDescription:(unsigned long long)a0;
- (void)setConstantValues:(id)a0;
- (id)specializedName;
- (struct { unsigned char x0[32]; })hashStableWithFunction:(id)a0;
- (void)setSpecializedName:(id)a0;

@end
