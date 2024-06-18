@class NSString, NSArray, TPDrawablesZOrder, TSDInfoGeometry, NSMutableDictionary, TSDFill, NSMutableArray, NSObject, TSPObject;
@protocol TSDInfo, TSDOwningAttachment;

@interface TPPageTemplate : TSPObject <TSKDocumentObject, TSDDrawableContainerInfo, TPSectionTemplateDrawableProvider, TSSPropertySource, TSKModelRootIndexProvider, TSKModel, TSWPStorageParentStatisticsFilter>

@property (retain, nonatomic) NSMutableArray *masterDrawables;
@property (retain, nonatomic) NSMutableDictionary *placeholderDrawables;
@property (readonly, nonatomic) TPDrawablesZOrder *drawablesZOrder;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) BOOL headersFootersMatchPreviousPage;
@property (retain, nonatomic) TSDFill *backgroundFill;
@property (nonatomic) BOOL hideHeadersFooters;
@property (readonly, nonatomic) unsigned long long numberOfDerivedPagesInDocument;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isTopmostContainerInfo;
@property (readonly, copy, nonatomic) NSArray *childInfos;
@property (readonly, nonatomic) BOOL isMaster;
@property (copy, nonatomic) TSDInfoGeometry *geometry;
@property (nonatomic) NSObject<TSDInfo> *parentInfo;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property (readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText;
@property (readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText;
@property (readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText;
@property (readonly, nonatomic, getter=isInlineWithTextWithWrap) BOOL inlineWithTextWithWrap;
@property (readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText;
@property (nonatomic) BOOL matchesObjectPlaceholderGeometry;
@property (readonly, nonatomic) unsigned long long countOfSectionTemplateDrawables;
@property (readonly, nonatomic) NSArray *sectionTemplateDrawables;

+ (BOOL)needsObjectUUID;
+ (BOOL)isUserDefinedTag:(id)a0;

- (id)objectForProperty:(int)a0;
- (void).cxx_destruct;
- (Class)layoutClass;
- (BOOL)isSelectable;
- (id)childEnumerator;
- (id)copyWithContext:(id)a0;
- (void)clearBackPointerToParentInfoIfNeeded:(id)a0;
- (BOOL)containsProperty:(int)a0;
- (float)floatValueForProperty:(int)a0;
- (BOOL)isThemeContent;
- (Class)repClass;
- (double)CGFloatValueForProperty:(int)a0;
- (id)boxedObjectForProperty:(int)a0;
- (double)doubleValueForProperty:(int)a0;
- (int)intValueForProperty:(int)a0;
- (void)wasAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)wasRemovedFromDocumentRoot:(id)a0;
- (void)willBeAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)willBeRemovedFromDocumentRoot:(id)a0;
- (void)saveToArchiver:(id)a0;
- (double)highestScaleFactorForRenderingDrawableInfo:(id)a0;
- (id)infoForSelectionPath:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (void)setPrimitiveGeometry:(id)a0;
- (void)addSectionTemplateDrawables:(id)a0 atIndex:(unsigned long long)a1 insertContext:(id)a2 suppressDOLC:(BOOL)a3;
- (unsigned long long)indexOfSectionTemplateDrawable:(id)a0;
- (id)tagForDrawable:(id)a0;
- (void)addPlaceholderDrawable:(id)a0 afterDrawable:(id)a1;
- (void)addSectionTemplateDrawable:(id)a0 atIndex:(unsigned long long)a1 insertContext:(id)a2 suppressDOLC:(BOOL)a3;
- (void)applyTag:(id)a0 toPlaceholder:(id)a1;
- (BOOL)containsModelObject:(id)a0;
- (void)enumeratePlaceholderDrawablesWithBlock:(id /* block */)a0;
- (id)initWithContext:(id)a0 name:(id)a1 placeholderDrawables:(id)a2 placeholderTagsInZOrder:(id)a3 sectionTemplateDrawables:(id)a4;
- (BOOL)isUniqueTag:(id)a0;
- (long long)modelRootIndex;
- (void)removeSectionTemplateDrawable:(id)a0 suppressDOLC:(BOOL)a1;
- (id)sectionTemplateDrawablesSortedByZOrder:(id)a0;
- (BOOL)statisticsShouldExcludeContainedStorage:(id)a0;
- (unsigned long long)templateIndex;
- (unsigned long long)templatePreviewPageIndex;
- (id)topLevelParentInfoForInfo:(id)a0;
- (id)userDefinedTagForDrawable:(id)a0;

@end