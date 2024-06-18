@class NSDictionary, NSMutableDictionary;

@interface AMSBuyParams : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary *_backingDictionary;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *normalizedDictionary;
@property (readonly, nonatomic) double price;
@property (readonly, copy) NSDictionary *dictionary;

+ (id)buyParamsWithString:(id)a0;

- (id)initWithCoder:(id)a0;
- (BOOL)containsKey:(id)a0;
- (id)init;
- (id)initWithString:(id)a0;
- (void)setProperty:(id)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)clear;
- (id)initWithArray:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)stringValue;
- (void).cxx_destruct;
- (id)description;
- (id)objectForKeyedSubscript:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)propertyForKey:(id)a0;
- (void)setParameter:(id)a0 forKey:(id)a1;
- (id)_normalizedDictionary;
- (void)_parseBuyParams:(id)a0;
- (void)_parseBuyParamsArray:(id)a0;
- (id)parameterForKey:(id)a0;
- (id)requestDataWithError:(id *)a0;

@end
