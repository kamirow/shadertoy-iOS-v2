//
//  ShaderViewController.h
//  shadertoy
//
//  Created by Reinder Nijhoff on 19/08/15.
//  Copyright (c) 2015 Reinder Nijhoff. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <GLKit/GLKit.h>
#import "APIShaderObject.h"

@interface ShaderViewController : UIViewController

@property (strong, nonatomic) IBOutlet UIImageView *shaderImageView;
@property (strong, nonatomic) IBOutlet UILabel *shaderName;
@property (strong, nonatomic) IBOutlet UILabel *shaderUserName;
@property (strong, nonatomic) IBOutlet UILabel *shaderDescription;
@property (strong, nonatomic) IBOutlet UILabel *shaderTouchPossible;

@property (strong, nonatomic) IBOutlet UILabel *shaderCompiling;
@property (strong, nonatomic) IBOutlet UILabel *shaderLikesInfo;
@property (strong, nonatomic) IBOutlet UIButton *shaderCompileInfoButton;

@property (strong, nonatomic) IBOutlet UIButton *shaderPlayerRewind;
@property (strong, nonatomic) IBOutlet UIButton *shaderPlayerPlay;
@property (strong, nonatomic) IBOutlet UILabel *shaderPlayerTime;
@property (strong, nonatomic) IBOutlet UIView *shaderPlayerContainer;

@property (strong, nonatomic) IBOutlet UIBarButtonItem *shaderShareButton;

- (void) setShaderObject:(APIShaderObject *)shader;

@end
