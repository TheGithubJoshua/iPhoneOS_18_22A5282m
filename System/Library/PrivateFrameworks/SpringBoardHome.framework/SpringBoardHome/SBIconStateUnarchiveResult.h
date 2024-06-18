@class SBRootFolder, NSDictionary, NSString, NSMutableSet, NSMutableArray;

@interface SBIconStateUnarchiveResult : NSObject <SBIconStateUnarchiveContext, BSDescriptionProviding> {
    NSMutableArray *_folderStack;
    long long _parseDepth;
    NSMutableSet *_nodeIdentifiersUnarchived;
    NSMutableSet *_widgetUniqueIdentifiersUnarchived;
    BOOL _corrupted;
    BOOL _dirty;
}

@property (retain, nonatomic, setter=_setRootFolder:) SBRootFolder *rootFolder;
@property (copy, nonatomic, setter=_setMetadata:) NSDictionary *metadata;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, nonatomic, getter=isDirty) BOOL dirty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_noteWidgetUniqueIdentifierWasUnarchived:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (long long)_currentParseDepth;
- (id)_currentFolder;
- (id)_popFolder;
- (id)succinctDescription;
- (void)_noteNodeIdentifierWasUnarchived:(id)a0;
- (void)_noteRepresentationIsCorrupted;
- (void).cxx_destruct;
- (void)_pushFolder:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)_noteExitedNode;
- (BOOL)_isWidgetUniqueIdentifierAlreadyUnarchived:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (BOOL)_isNodeIdentifierAlreadyUnarchived:(id)a0;
- (void)_noteSignificantDeviation;
- (void)_noteEnteredNode;

@end
