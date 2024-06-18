@class NSString, NSArray, NSMutableDictionary, AMSDialogRequest;

@interface AMSDialogResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) AMSDialogRequest *originalRequest;
@property (copy, nonatomic) NSString *selectedActionIdentifier;
@property (copy, nonatomic) NSArray *textfieldValues;
@property (retain, nonatomic) NSMutableDictionary *userInfo;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithOriginalRequest:(id)a0 selectedActionIdentifier:(id)a1;

@end
