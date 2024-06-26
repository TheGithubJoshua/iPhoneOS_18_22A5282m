@class NSString;

@interface IDSReceivedInvitation : IDSInvitation <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *fromID;

- (id)initWithCoder:(id)a0;
- (void)setState:(long long)a0;
- (void)setContext:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithfromID:(id)a0 state:(long long)a1 expirationDate:(id)a2 uniqueID:(id)a3 context:(id)a4;
- (void)setSenderMergeID:(id)a0;

@end
