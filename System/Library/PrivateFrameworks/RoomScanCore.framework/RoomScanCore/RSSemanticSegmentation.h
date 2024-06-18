@class SISceneSegmentationAlgorithm, SISceneSegmentationNetworkConfiguration, SISceneSegmentationData, RSCVPixelRotate;

@interface RSSemanticSegmentation : NSObject {
    RSCVPixelRotate *_cvRotate90;
    RSCVPixelRotate *_cvRotate90r;
    RSCVPixelRotate *_cvRotate180;
    RSCVPixelRotate *_cvRotate180r;
    RSCVPixelRotate *_cvRotate270;
    RSCVPixelRotate *_cvRotate270r;
    SISceneSegmentationAlgorithm *_siSceneSegmentationAlgorithm;
    SISceneSegmentationNetworkConfiguration *_semanticConfig;
    SISceneSegmentationData *_semResultData;
    long long _semanticModel;
    long long _deviceOrientation;
    BOOL _initRotater;
    BOOL _initSegModel;
}

- (id)init;
- (void).cxx_destruct;
- (struct __CVBuffer { } *)generateSemanticOnWideCameraWithFrame:(id)a0;
- (BOOL)setupRotater:(id)a0;

@end
