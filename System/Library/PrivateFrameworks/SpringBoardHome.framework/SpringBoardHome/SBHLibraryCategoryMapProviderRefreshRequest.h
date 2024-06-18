@class NSString, NSMutableDictionary;

@interface SBHLibraryCategoryMapProviderRefreshRequest : NSObject <NSCopying> {
    NSMutableDictionary *_failures;
}

@property (readonly, nonatomic) unsigned long long options;
@property (copy, nonatomic) NSString *requestReason;
@property (copy, nonatomic) NSString *senderDescription;
@property (readonly, nonatomic) unsigned long long failureCount;

- (id)initWithOptions:(unsigned long long)a0 reason:(id)a1;
- (BOOL)hasFailedSeveralTimes;
- (void).cxx_destruct;
- (id)description;
- (id)failureForSessionIdentifier:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)accumulateFailure:(id)a0 forSession:(unsigned long long)a1;

@end
