@class NSArray, NSDictionary, NSSet, NSString;

@interface _MPCPlayerResetTracklistCommand : _MPCPlayerCommand <MPCPlayerResetTracklistCommand>

@property (copy, nonatomic) NSArray *devices;
@property (retain, nonatomic) NSDictionary *supportedSpecializedQueues;
@property (nonatomic) BOOL supportsSetQueueCommand;
@property (retain, nonatomic) NSSet *supportedQueueTypes;
@property (retain, nonatomic) NSSet *supportedCustomDataQueueIdentifiers;
@property (readonly, nonatomic) NSArray *specializedIntents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)replaceWithPlaybackIntent:(id)a0;
- (id)clear;
- (void).cxx_destruct;
- (id)replaceWithPlaybackIntent:(id)a0 replaceIntent:(long long)a1;
- (id)clearUpNextItems;

@end
