@interface _CNNeverObservable : CNObservable

- (id)subscribe:(id)a0;
- (id)pipelineDescription:(id /* block */)a0;
- (id)pipelineDescriptionWithOperation:(id /* block */)a0 onObservable:(id)a1;
- (id)debugPipelineDescription;

@end
