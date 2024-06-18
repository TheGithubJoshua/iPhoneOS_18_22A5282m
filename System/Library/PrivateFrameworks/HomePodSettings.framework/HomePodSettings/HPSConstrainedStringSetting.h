@class NSArray;

@interface HPSConstrainedStringSetting : HPSStringSetting

@property (readonly, copy, nonatomic) NSArray *items;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithKeyPath:(id)a0 stringValue:(id)a1 items:(id)a2;

@end
