@class NSDate;

@interface EMMessageReadLaterAction : EMMessageChangeAction

@property (readonly, nonatomic) NSDate *readLaterDate;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (long long)signpostType;
- (id)initWithMessageListItems:(id)a0 readLaterDate:(id)a1;

@end
