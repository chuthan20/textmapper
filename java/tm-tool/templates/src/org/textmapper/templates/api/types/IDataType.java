/**
 * Copyright 2002-2022 Evgeny Gryaznov
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
package org.textmapper.templates.api.types;

import java.util.Collection;

public interface IDataType extends IType {

	DataTypeKind getKind();

	Collection<Constraint> getConstraints();

	enum DataTypeKind {
		STRING, BOOL, INT
	}

	enum ConstraintKind {
		NOTEMPTY, IDENTIFIER, QUALIFIED_IDENTIFIER, SET, CHOICE
	}

	interface Constraint {
		ConstraintKind getKind();

		Collection<String> getParameters();
	}
}
