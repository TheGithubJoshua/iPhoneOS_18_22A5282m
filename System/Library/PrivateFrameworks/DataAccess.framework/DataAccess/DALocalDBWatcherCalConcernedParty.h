@class NSString;

@interface DALocalDBWatcherCalConcernedParty : NSObject <NSCopying>

@property (readonly, weak, nonatomic) id concernedParty;
@property (readonly, nonatomic) NSString *accountID;

- (id)initWithConcernedParty:(id)a0 accountID:(id)a1;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
