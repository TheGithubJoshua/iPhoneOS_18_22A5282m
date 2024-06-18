@class NSString;

@interface BWInferenceLazyVideoRequirement : BWInferenceVideoRequirement <NSCopying> {
    id /* block */ _videoFormatProvider;
}

@property (readonly, copy, nonatomic) NSString *preparedByAttachedMediaKey;

- (id)initWithAttachedMediaKey:(id)a0 count:(unsigned long long)a1;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLazyVideoRequirement:(id)a0;
- (id)initWithAttachedMediaKey:(id)a0 preparedByAttachedMediaKey:(id)a1 count:(unsigned long long)a2 videoFormatProvider:(id /* block */)a3;
- (id)initWithAttachedMediaKey:(id)a0 preparedByAttachedMediaKey:(id)a1 videoFormatProvider:(id /* block */)a2;
- (void)dealloc;
- (int)prepareForInputInferenceVideoFormat:(id)a0;
- (id)initWithAttachedMediaKey:(id)a0 videoFormat:(id)a1 count:(unsigned long long)a2;

@end
