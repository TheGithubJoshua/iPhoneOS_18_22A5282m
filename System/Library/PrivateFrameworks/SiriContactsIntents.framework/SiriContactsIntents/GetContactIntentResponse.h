@class NSArray;

@interface GetContactIntentResponse : INIntentResponse

@property (nonatomic, copy) NSArray *contactIdentifiers;
@property (nonatomic) void /* unknown type, empty encoding */ code;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithBackingStore:(id)a0;
- (id)initWithCode:(long long)a0 userActivity:(id)a1;
- (id)initWithPropertiesByName:(id)a0;

@end
