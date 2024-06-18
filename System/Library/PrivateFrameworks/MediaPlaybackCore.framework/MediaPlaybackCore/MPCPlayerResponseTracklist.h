@class NSString, MPCPlayerResponseItem, MPCPlayerResponse, MPSectionedCollection, NSIndexPath;

@interface MPCPlayerResponseTracklist : NSObject <NSObject> {
    unsigned long long _changeItemSupport;
}

@property (readonly, weak, nonatomic) MPCPlayerResponse *response;
@property (readonly, copy, nonatomic) MPSectionedCollection *items;
@property (readonly, copy, nonatomic) NSIndexPath *playingItemIndexPath;
@property (readonly, copy, nonatomic) MPSectionedCollection *displayItems;
@property (readonly, nonatomic) long long playingItemGlobalIndex;
@property (readonly, nonatomic) long long globalItemCount;
@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) long long lastChangeDirection;
@property (readonly, nonatomic) long long upNextItemCount;
@property (readonly, nonatomic) long long explicitContentState;
@property (readonly, nonatomic) MPCPlayerResponseItem *playingItem;
@property (readonly, nonatomic) long long repeatType;
@property (readonly, nonatomic) long long shuffleType;
@property (readonly, nonatomic) long long actionAtQueueEnd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)insertCommandForPlayerPath:(id)a0 devices:(id)a1;
+ (id)resetCommandForPlayerPath:(id)a0 devices:(id)a1;

- (id)shuffleCommand;
- (unsigned long long)_determineChangeItemSupport;
- (id)_stateDumpObject;
- (id)changeItemCommand;
- (id)reorderCommand;
- (id)prepareVocalsControlCommand;
- (id)displayIndexPathForStructuredIndexPath:(id)a0;
- (void).cxx_destruct;
- (id)initWithResponse:(id)a0;
- (id)repeatCommand;
- (id)insertCommand;
- (id)resetCommand;
- (id)structuredIndexPathForDisplayIndexPath:(id)a0;
- (id)vocalsControlCommand;
- (id)actionAtQueueEndCommand;

@end
