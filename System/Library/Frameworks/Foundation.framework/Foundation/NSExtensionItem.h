@class NSArray, NSDictionary, NSMutableDictionary, NSAttributedString;

@interface NSExtensionItem : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary *_userInfo;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSAttributedString *attributedTitle;
@property (copy, nonatomic) NSAttributedString *attributedContentText;
@property (copy, nonatomic) NSArray *attachments;
@property (copy, nonatomic) NSDictionary *userInfo;

- (id)initWithCoder:(id)a0;
- (void)setAttachments:(id)a0;
- (id)init;
- (id)attachments;
- (void)setAttributedTitle:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)attributedTitle;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)_matchingDictionaryRepresentation;
- (id)attributedContentText;
- (void)setAttributedContentText:(id)a0;

@end
