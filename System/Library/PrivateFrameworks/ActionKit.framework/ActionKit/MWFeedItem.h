@class NSString, NSArray, NSDate;

@interface MWFeedItem : NSObject <NSCoding>

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *link;
@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSDate *updated;
@property (copy, nonatomic) NSString *summary;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *author;
@property (copy, nonatomic) NSArray *enclosures;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)mainImageURL;
- (id)asWFArticle;

@end
