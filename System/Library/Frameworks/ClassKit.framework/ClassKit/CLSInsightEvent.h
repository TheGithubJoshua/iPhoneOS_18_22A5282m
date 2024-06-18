@class NSMutableDictionary;

@interface CLSInsightEvent : CLSObject

@property (retain, nonatomic) NSMutableDictionary *info;
@property (nonatomic) long long type;

+ (BOOL)supportsSecureCoding;
+ (id)supportedInfoDictionaryClasses;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithType:(long long)a0;
- (id)_init;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)mergeWithObject:(id)a0;
- (BOOL)validateObject:(id *)a0;
- (id)_infoDictDescription;

@end
