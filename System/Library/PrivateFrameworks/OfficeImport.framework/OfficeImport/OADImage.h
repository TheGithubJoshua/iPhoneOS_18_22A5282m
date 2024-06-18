@class OADMovie, OADOle, OADShapeGeometry;

@interface OADImage : OADGraphic {
    OADShapeGeometry *mGeometry;
    OADOle *mOle;
    OADMovie *mMovie;
}

- (void)setGeometry:(id)a0;
- (id)init;
- (id)geometry;
- (void).cxx_destruct;
- (id)description;
- (id)imageProperties;
- (id)movie;
- (void)setMovie:(id)a0;
- (void)setOle:(id)a0;
- (id)createImageFill;
- (id)ole;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)a0;
- (void)createPictureFramePresetGeometry;
- (id)initWithBlipRef:(id)a0;
- (void)setParentTextListStyle:(id)a0;

@end
