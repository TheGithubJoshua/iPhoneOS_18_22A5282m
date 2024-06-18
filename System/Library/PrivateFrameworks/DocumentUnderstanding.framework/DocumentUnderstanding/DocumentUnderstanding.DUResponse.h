@interface DocumentUnderstanding.DUResponse : NSObject <NSCoding, NSCopying>

@property (nonatomic, retain) void /* unknown type, empty encoding */ topics;
@property (nonatomic, retain) void /* unknown type, empty encoding */ structuredEntities;
@property (nonatomic, retain) void /* unknown type, empty encoding */ languageTags;
@property (nonatomic, retain) void /* unknown type, empty encoding */ productCategories;
@property (nonatomic, retain) void /* unknown type, empty encoding */ userInterfaceUnderstandingResults;
@property (nonatomic, retain) void /* unknown type, empty encoding */ documentCategories;
@property (nonatomic, retain) void /* unknown type, empty encoding */ responseDebugInfo;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(void *)a0;

@end
