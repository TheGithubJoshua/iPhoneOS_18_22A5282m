@class NSArray;

@interface DocumentUnderstanding.DUCategoryClassificationResponse : NSObject <NSCoding, NSCopying> {
    void /* unknown type, empty encoding */ categories;
}

@property (nonatomic, copy) NSArray *categories;
@property (nonatomic, retain) void /* unknown type, empty encoding */ responseDebugInfo;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(void *)a0;

@end
