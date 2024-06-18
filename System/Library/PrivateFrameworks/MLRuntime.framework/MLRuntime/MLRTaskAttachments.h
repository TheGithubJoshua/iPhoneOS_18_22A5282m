@class NSArray;

@interface MLRTaskAttachments : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, copy, nonatomic) NSArray *attachmentURLs;

- (id)initWithCoder:(id)a0;
- (id)initWithContentsOfURL:(id)a0 error:(id *)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)attachmentURLsForBasename:(id)a0;
- (id)initWithURLs:(id)a0;
- (id)initWithDESRecipe:(id)a0;

@end
