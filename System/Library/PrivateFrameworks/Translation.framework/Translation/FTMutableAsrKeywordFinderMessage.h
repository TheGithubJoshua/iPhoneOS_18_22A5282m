@class FTKeywordFinderResponse, FTKeywordFinderRequest, NSObject;
@protocol FLTBFBufferAccessor, NSCopying;

@interface FTMutableAsrKeywordFinderMessage : FTAsrKeywordFinderMessage

@property (nonatomic) long long session_message_type;
@property (copy, nonatomic) FTKeywordFinderRequest *session_messageAsFTKeywordFinderRequest;
@property (copy, nonatomic) FTKeywordFinderResponse *session_messageAsFTKeywordFinderResponse;
@property (copy, nonatomic) NSObject<FLTBFBufferAccessor, NSCopying> *session_message;

+ (Class)session_message_mutableClassForType:(long long)a0;
+ (long long)session_message_typeForMutableObject:(id)a0;
+ (long long)session_message_typeForObject:(id)a0;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setSession_message:(id)a0;

@end