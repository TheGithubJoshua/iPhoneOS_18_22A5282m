@class NSString;

@interface UIDictationToken : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *text;
@property (nonatomic) BOOL removeSpaceBefore;
@property (readonly, nonatomic) BOOL removeSpaceAfter;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)_descriptionExtra;
- (id)initWithText:(id)a0 removeSpaceBefore:(BOOL)a1 removeSpaceAfter:(BOOL)a2;

@end
