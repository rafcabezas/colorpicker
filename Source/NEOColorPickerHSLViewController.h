//
//  NEOColorPickerViewController.h
//
//  Created by Karthik Abram on 10/10/12.
//  Copyright (c) 2012 Neovera Inc.
//


/*
 
 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at
 
 http://www.apache.org/licenses/LICENSE-2.0
 
 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 
 */


#import <UIKit/UIKit.h>
#import "NEOColorPickerBaseViewController.h"


@class NEOColorPickerGradientView;


@interface NEOColorPickerHSLViewController : NEOColorPickerBaseViewController

@property (unsafe_unretained, nonatomic) IBOutlet UIImageView *hueImageView;
@property (unsafe_unretained, nonatomic) IBOutlet UIImageView *hueCrosshair;
@property (unsafe_unretained, nonatomic) IBOutlet NEOColorPickerGradientView *gradientViewSaturation;
@property (unsafe_unretained, nonatomic) IBOutlet NEOColorPickerGradientView *gradientViewLuminosity;
@property (unsafe_unretained, nonatomic) IBOutlet NEOColorPickerGradientView *gradientViewAlpha;
@property (unsafe_unretained, nonatomic) IBOutlet UIImageView *checkeredView;
@property (unsafe_unretained, nonatomic) IBOutlet UIButton *buttonSatMin;
@property (unsafe_unretained, nonatomic) IBOutlet UIButton *buttonSatMax;
@property (unsafe_unretained, nonatomic) IBOutlet UIButton *buttonLumMax;
@property (unsafe_unretained, nonatomic) IBOutlet UIButton *buttonLumMin;
@property (unsafe_unretained, nonatomic) IBOutlet UIButton *buttonAlphaMax;
@property (unsafe_unretained, nonatomic) IBOutlet UIButton *buttonAlphaMin;
@property (unsafe_unretained, nonatomic) IBOutlet UILabel *labelTransparency;
@property (unsafe_unretained, nonatomic) IBOutlet UILabel *labelPreview;

- (IBAction)buttonPressMaxMin:(id)sender;


@end
