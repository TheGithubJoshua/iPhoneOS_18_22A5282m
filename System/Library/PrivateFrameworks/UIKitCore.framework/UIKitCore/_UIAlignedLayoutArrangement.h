@class NSSet, NSString, NSMutableDictionary;

@interface _UIAlignedLayoutArrangement : _UILayoutArrangement <_UIALAPropertySource> {
    NSMutableDictionary *_alignmentConstraints;
}

@property (nonatomic) unsigned long long alignment;
@property (nonatomic) long long axis;
@property (nonatomic) BOOL layoutFillsCanvas;
@property (nonatomic) BOOL layoutUsesCanvasMarginsWhenFilling;
@property (readonly, nonatomic) NSSet *_newlyHiddenItems;
@property (readonly, nonatomic) NSSet *_newlyUnhiddenItems;
@property (readonly, nonatomic) NSSet *invalidBaselineConstraints;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)_configurationHistoryClass;

- (BOOL)_spanningGuideConstraintsNeedUpdate;
- (void)_updateArrangementConstraints;
- (BOOL)_usesInequalitySpanningConstraintForAttribute:(long long)a0;
- (BOOL)_usesCenteringConnectionConstraint;
- (BOOL)_hasStaleConfiguration;
- (BOOL)_canvasConnectionConstraintsNeedUpdatePass;
- (void)_clearAllConstraintsArrays;
- (id)_identifierForSpanningLayoutGuide;
- (long long)_axisForSpanningLayoutGuide;
- (void)_updateConfigurationHistory;
- (unsigned long long)_indexOfItemForLocationAttribute:(long long)a0;
- (id)_alignmentConfigurationHistory;
- (void)_setUpConstraintForItem:(id)a0 referenceItem:(id)a1 attribute:(long long)a2 inConstraintsTable:(id)a3;
- (id)_alignmentPropertySource;
- (BOOL)_wantsConstraintsUsingAttributesForAxis:(long long)a0;
- (BOOL)_requiresNotificationForHasBaselinePropertyChanges;
- (long long)_attributeForConstraintGroupName:(id)a0;
- (void)_removeIndividualConstraintsAsNecessary;
- (BOOL)_wantsAmbiguitySuppressionConstraints;
- (void).cxx_destruct;
- (void)_addIndividualConstraintsIfPossible;
- (id)_baselineDependentConstraints;
- (void)dealloc;
- (id)initWithItems:(id)a0;
- (long long)_layoutRelationForCanvasConnectionForAttribute:(long long)a0;
- (void)_removeConstraintGroupsAsNecessary;
- (void)_addConstraintGroupsAsNecessary;
- (BOOL)_wantsConstraintsForAttribute:(long long)a0;

@end
