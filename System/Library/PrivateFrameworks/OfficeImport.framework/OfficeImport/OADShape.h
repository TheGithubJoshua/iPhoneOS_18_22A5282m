@class OADShapeGeometry, OADTextBody, OADOrientedBounds;

@interface OADShape : OADGraphic {
    OADShapeGeometry *mGeometry;
    OADTextBody *mTextBody;
}

@property (retain, nonatomic) OADOrientedBounds *textOrientedBounds;

- (void)setGeometry:(id)a0;
- (id)init;
- (id)geometry;
- (id)shapeStyle;
- (void).cxx_destruct;
- (id)description;
- (int)type;
- (void)setTextBody:(id)a0;
- (id)textBody;
- (BOOL)isTextBox;
- (id)shapeProperties;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)a0;
- (void)createPresetGeometryWithShapeType:(int)a0;
- (void)flattenProperties;
- (void)removeUnnecessaryOverrides;
- (void)setParentTextListStyle:(id)a0;

@end
