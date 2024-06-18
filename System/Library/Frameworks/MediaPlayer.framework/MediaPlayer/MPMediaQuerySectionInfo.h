@class NSArray;

@interface MPMediaQuerySectionInfo : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSArray *_sectionIndexTitles;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *sectionIndexTitles;
@property (readonly, copy, nonatomic) NSArray *sections;
@property (nonatomic) BOOL hasUnknownSection;
@property (readonly, nonatomic) unsigned long long count;

- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)indexOfSectionForSectionIndexTitleAtIndex:(unsigned long long)a0;

@end
