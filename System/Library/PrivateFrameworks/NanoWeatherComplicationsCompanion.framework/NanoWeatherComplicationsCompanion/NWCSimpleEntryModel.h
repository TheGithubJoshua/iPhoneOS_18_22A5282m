@class NSArray;

@interface NWCSimpleEntryModel : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSArray *hourlyEntryModels;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithEntries:(id)a0;

@end
